// fichero 11153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11153;

Registro11153 crear_registro11153(int id) {
    Registro11153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11153(Registro11153 r) {
    return r.valor + r.id;
}
