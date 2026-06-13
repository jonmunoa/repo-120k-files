// fichero 5041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5041;

Registro5041 crear_registro5041(int id) {
    Registro5041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5041(Registro5041 r) {
    return r.valor + r.id;
}
