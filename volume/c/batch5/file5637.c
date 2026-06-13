// fichero 5637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5637;

Registro5637 crear_registro5637(int id) {
    Registro5637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5637(Registro5637 r) {
    return r.valor + r.id;
}
