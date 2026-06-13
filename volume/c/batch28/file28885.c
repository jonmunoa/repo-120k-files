// fichero 28885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28885;

Registro28885 crear_registro28885(int id) {
    Registro28885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28885(Registro28885 r) {
    return r.valor + r.id;
}
