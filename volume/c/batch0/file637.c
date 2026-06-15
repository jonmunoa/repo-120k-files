// fichero 637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro637;

Registro637 crear_registro637(int id) {
    Registro637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
