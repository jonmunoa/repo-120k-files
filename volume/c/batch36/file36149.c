// fichero 36149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36149;

Registro36149 crear_registro36149(int id) {
    Registro36149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36149(Registro36149 r) {
    return r.valor + r.id;
}
