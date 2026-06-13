// fichero 26545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26545;

Registro26545 crear_registro26545(int id) {
    Registro26545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26545(Registro26545 r) {
    return r.valor + r.id;
}
