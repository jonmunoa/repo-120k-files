// fichero 48041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48041;

Registro48041 crear_registro48041(int id) {
    Registro48041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48041(Registro48041 r) {
    return r.valor + r.id;
}
