// fichero 27045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27045;

Registro27045 crear_registro27045(int id) {
    Registro27045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
