// fichero 12053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12053;

Registro12053 crear_registro12053(int id) {
    Registro12053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12053(Registro12053 r) {
    return r.valor + r.id;
}
