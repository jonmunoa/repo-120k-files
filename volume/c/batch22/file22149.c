// fichero 22149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22149;

Registro22149 crear_registro22149(int id) {
    Registro22149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22149(Registro22149 r) {
    return r.valor + r.id;
}
