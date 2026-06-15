// fichero 29765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29765;

Registro29765 crear_registro29765(int id) {
    Registro29765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
