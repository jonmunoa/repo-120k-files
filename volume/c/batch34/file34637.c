// fichero 34637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34637;

Registro34637 crear_registro34637(int id) {
    Registro34637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
