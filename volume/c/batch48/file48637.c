// fichero 48637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48637;

Registro48637 crear_registro48637(int id) {
    Registro48637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
