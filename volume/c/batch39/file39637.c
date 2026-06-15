// fichero 39637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39637;

Registro39637 crear_registro39637(int id) {
    Registro39637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
