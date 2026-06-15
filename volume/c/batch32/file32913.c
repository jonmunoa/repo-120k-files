// fichero 32913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32913;

Registro32913 crear_registro32913(int id) {
    Registro32913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
