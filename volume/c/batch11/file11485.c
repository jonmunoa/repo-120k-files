// fichero 11485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11485;

Registro11485 crear_registro11485(int id) {
    Registro11485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11485(Registro11485 r) {
    return r.valor + r.id;
}
