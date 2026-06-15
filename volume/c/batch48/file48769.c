// fichero 48769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48769;

Registro48769 crear_registro48769(int id) {
    Registro48769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
