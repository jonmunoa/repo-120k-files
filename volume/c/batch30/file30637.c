// fichero 30637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30637;

Registro30637 crear_registro30637(int id) {
    Registro30637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
