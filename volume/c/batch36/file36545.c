// fichero 36545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36545;

Registro36545 crear_registro36545(int id) {
    Registro36545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36545(Registro36545 r) {
    return r.valor + r.id;
}
