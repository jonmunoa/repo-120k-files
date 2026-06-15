// fichero 15637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15637;

Registro15637 crear_registro15637(int id) {
    Registro15637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
