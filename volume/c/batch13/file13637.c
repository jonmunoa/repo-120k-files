// fichero 13637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13637;

Registro13637 crear_registro13637(int id) {
    Registro13637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
