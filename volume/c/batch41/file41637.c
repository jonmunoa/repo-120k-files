// fichero 41637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41637;

Registro41637 crear_registro41637(int id) {
    Registro41637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
