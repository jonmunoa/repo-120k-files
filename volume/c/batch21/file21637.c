// fichero 21637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21637;

Registro21637 crear_registro21637(int id) {
    Registro21637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
