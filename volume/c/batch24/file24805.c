// fichero 24805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24805;

Registro24805 crear_registro24805(int id) {
    Registro24805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24805(Registro24805 r) {
    return r.valor + r.id;
}
