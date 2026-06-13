// fichero 7841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7841;

Registro7841 crear_registro7841(int id) {
    Registro7841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7841(Registro7841 r) {
    return r.valor + r.id;
}
