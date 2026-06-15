// fichero 20637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20637;

Registro20637 crear_registro20637(int id) {
    Registro20637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
