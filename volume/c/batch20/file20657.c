// fichero 20657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20657;

Registro20657 crear_registro20657(int id) {
    Registro20657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20657(Registro20657 r) {
    return r.valor + r.id;
}
