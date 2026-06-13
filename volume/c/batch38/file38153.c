// fichero 38153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38153;

Registro38153 crear_registro38153(int id) {
    Registro38153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38153(Registro38153 r) {
    return r.valor + r.id;
}
