// fichero 6637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6637;

Registro6637 crear_registro6637(int id) {
    Registro6637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
