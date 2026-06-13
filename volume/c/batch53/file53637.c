// fichero 53637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53637;

Registro53637 crear_registro53637(int id) {
    Registro53637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53637(Registro53637 r) {
    return r.valor + r.id;
}
