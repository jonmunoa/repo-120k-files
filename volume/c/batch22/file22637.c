// fichero 22637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22637;

Registro22637 crear_registro22637(int id) {
    Registro22637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
