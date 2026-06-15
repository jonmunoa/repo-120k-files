// fichero 11637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11637;

Registro11637 crear_registro11637(int id) {
    Registro11637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
