// fichero 3637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3637;

Registro3637 crear_registro3637(int id) {
    Registro3637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
