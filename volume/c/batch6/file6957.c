// fichero 6957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6957;

Registro6957 crear_registro6957(int id) {
    Registro6957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
