// fichero 18637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18637;

Registro18637 crear_registro18637(int id) {
    Registro18637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
