// fichero 24637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24637;

Registro24637 crear_registro24637(int id) {
    Registro24637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
