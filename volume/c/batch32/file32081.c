// fichero 32081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32081;

Registro32081 crear_registro32081(int id) {
    Registro32081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
