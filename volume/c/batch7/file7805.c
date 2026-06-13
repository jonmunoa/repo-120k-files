// fichero 7805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7805;

Registro7805 crear_registro7805(int id) {
    Registro7805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7805(Registro7805 r) {
    return r.valor + r.id;
}
