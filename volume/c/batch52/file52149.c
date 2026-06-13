// fichero 52149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52149;

Registro52149 crear_registro52149(int id) {
    Registro52149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52149(Registro52149 r) {
    return r.valor + r.id;
}
