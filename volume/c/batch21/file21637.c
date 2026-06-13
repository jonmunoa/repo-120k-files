// fichero 21637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21637;

Registro21637 crear_registro21637(int id) {
    Registro21637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21637(Registro21637 r) {
    return r.valor + r.id;
}
