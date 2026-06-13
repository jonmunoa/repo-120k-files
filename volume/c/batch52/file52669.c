// fichero 52669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52669;

Registro52669 crear_registro52669(int id) {
    Registro52669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52669(Registro52669 r) {
    return r.valor + r.id;
}
