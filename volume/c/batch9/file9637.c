// fichero 9637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9637;

Registro9637 crear_registro9637(int id) {
    Registro9637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
