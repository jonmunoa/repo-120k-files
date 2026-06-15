// fichero 27637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27637;

Registro27637 crear_registro27637(int id) {
    Registro27637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
