// fichero 8693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8693;

Registro8693 crear_registro8693(int id) {
    Registro8693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8693(Registro8693 r) {
    return r.valor + r.id;
}
