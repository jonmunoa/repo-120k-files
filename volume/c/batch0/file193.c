// fichero 193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro193;

Registro193 crear_registro193(int id) {
    Registro193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
