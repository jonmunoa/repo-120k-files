// fichero 34445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34445;

Registro34445 crear_registro34445(int id) {
    Registro34445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34445(Registro34445 r) {
    return r.valor + r.id;
}
