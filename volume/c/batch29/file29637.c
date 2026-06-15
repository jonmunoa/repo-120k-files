// fichero 29637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29637;

Registro29637 crear_registro29637(int id) {
    Registro29637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
