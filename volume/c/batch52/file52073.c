// fichero 52073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52073;

Registro52073 crear_registro52073(int id) {
    Registro52073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52073(Registro52073 r) {
    return r.valor + r.id;
}
