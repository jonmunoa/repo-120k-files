// fichero 43637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43637;

Registro43637 crear_registro43637(int id) {
    Registro43637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
