// fichero 16637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16637;

Registro16637 crear_registro16637(int id) {
    Registro16637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
