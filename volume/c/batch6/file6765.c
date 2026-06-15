// fichero 6765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6765;

Registro6765 crear_registro6765(int id) {
    Registro6765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
