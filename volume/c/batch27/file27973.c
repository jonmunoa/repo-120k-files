// fichero 27973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27973;

Registro27973 crear_registro27973(int id) {
    Registro27973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
