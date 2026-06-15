// fichero 29469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29469;

Registro29469 crear_registro29469(int id) {
    Registro29469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
