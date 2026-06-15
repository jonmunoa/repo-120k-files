// fichero 47637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47637;

Registro47637 crear_registro47637(int id) {
    Registro47637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
