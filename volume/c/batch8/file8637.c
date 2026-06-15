// fichero 8637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8637;

Registro8637 crear_registro8637(int id) {
    Registro8637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
