// fichero 49637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49637;

Registro49637 crear_registro49637(int id) {
    Registro49637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
