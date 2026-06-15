// fichero 4637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4637;

Registro4637 crear_registro4637(int id) {
    Registro4637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
