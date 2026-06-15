// fichero 33637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33637;

Registro33637 crear_registro33637(int id) {
    Registro33637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
