// fichero 27121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27121;

Registro27121 crear_registro27121(int id) {
    Registro27121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
