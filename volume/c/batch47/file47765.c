// fichero 47765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47765;

Registro47765 crear_registro47765(int id) {
    Registro47765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
