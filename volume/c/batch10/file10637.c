// fichero 10637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10637;

Registro10637 crear_registro10637(int id) {
    Registro10637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10637(Registro10637 r) {
    return r.valor + r.id;
}
