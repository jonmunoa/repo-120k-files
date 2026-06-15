// fichero 37637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37637;

Registro37637 crear_registro37637(int id) {
    Registro37637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
