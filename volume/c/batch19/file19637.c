// fichero 19637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19637;

Registro19637 crear_registro19637(int id) {
    Registro19637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
