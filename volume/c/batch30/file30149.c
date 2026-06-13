// fichero 30149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30149;

Registro30149 crear_registro30149(int id) {
    Registro30149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30149(Registro30149 r) {
    return r.valor + r.id;
}
