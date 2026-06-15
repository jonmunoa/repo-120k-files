// fichero 12193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12193;

Registro12193 crear_registro12193(int id) {
    Registro12193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
