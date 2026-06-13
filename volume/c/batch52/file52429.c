// fichero 52429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52429;

Registro52429 crear_registro52429(int id) {
    Registro52429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52429(Registro52429 r) {
    return r.valor + r.id;
}
