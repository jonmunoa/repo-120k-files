// fichero 3041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3041;

Registro3041 crear_registro3041(int id) {
    Registro3041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3041(Registro3041 r) {
    return r.valor + r.id;
}
