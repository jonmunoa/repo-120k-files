// fichero 14637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14637;

Registro14637 crear_registro14637(int id) {
    Registro14637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
