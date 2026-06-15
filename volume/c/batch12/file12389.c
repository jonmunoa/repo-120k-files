// fichero 12389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12389;

Registro12389 crear_registro12389(int id) {
    Registro12389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
