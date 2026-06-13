// fichero 21781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21781;

Registro21781 crear_registro21781(int id) {
    Registro21781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21781(Registro21781 r) {
    return r.valor + r.id;
}
