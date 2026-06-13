// fichero 17817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17817;

Registro17817 crear_registro17817(int id) {
    Registro17817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17817(Registro17817 r) {
    return r.valor + r.id;
}
