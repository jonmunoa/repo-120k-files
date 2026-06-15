// fichero 27241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27241;

Registro27241 crear_registro27241(int id) {
    Registro27241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
