// fichero 27825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27825;

Registro27825 crear_registro27825(int id) {
    Registro27825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
