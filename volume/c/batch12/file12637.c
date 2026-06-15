// fichero 12637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12637;

Registro12637 crear_registro12637(int id) {
    Registro12637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
