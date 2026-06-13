// fichero 37041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37041;

Registro37041 crear_registro37041(int id) {
    Registro37041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37041(Registro37041 r) {
    return r.valor + r.id;
}
