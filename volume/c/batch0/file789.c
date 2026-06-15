// fichero 789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro789;

Registro789 crear_registro789(int id) {
    Registro789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
