// fichero 36041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36041;

Registro36041 crear_registro36041(int id) {
    Registro36041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36041(Registro36041 r) {
    return r.valor + r.id;
}
