// fichero 36637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36637;

Registro36637 crear_registro36637(int id) {
    Registro36637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
