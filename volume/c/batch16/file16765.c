// fichero 16765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16765;

Registro16765 crear_registro16765(int id) {
    Registro16765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
