// fichero 25637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25637;

Registro25637 crear_registro25637(int id) {
    Registro25637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
