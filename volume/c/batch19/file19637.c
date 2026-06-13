// fichero 19637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19637;

Registro19637 crear_registro19637(int id) {
    Registro19637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19637(Registro19637 r) {
    return r.valor + r.id;
}
