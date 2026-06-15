// fichero 45637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45637;

Registro45637 crear_registro45637(int id) {
    Registro45637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
