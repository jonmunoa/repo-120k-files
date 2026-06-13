// fichero 21489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21489;

Registro21489 crear_registro21489(int id) {
    Registro21489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21489(Registro21489 r) {
    return r.valor + r.id;
}
