// fichero 45617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45617;

Registro45617 crear_registro45617(int id) {
    Registro45617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
