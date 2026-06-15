// fichero 44637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44637;

Registro44637 crear_registro44637(int id) {
    Registro44637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
