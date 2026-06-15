// fichero 38637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38637;

Registro38637 crear_registro38637(int id) {
    Registro38637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
