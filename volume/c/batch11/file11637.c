// fichero 11637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11637;

Registro11637 crear_registro11637(int id) {
    Registro11637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11637(Registro11637 r) {
    return r.valor + r.id;
}
