// fichero 7445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7445;

Registro7445 crear_registro7445(int id) {
    Registro7445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7445(Registro7445 r) {
    return r.valor + r.id;
}
