// fichero 45657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45657;

Registro45657 crear_registro45657(int id) {
    Registro45657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
