// fichero 29629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29629;

Registro29629 crear_registro29629(int id) {
    Registro29629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
