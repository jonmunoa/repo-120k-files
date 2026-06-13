// fichero 52685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52685;

Registro52685 crear_registro52685(int id) {
    Registro52685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52685(Registro52685 r) {
    return r.valor + r.id;
}
