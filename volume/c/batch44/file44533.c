// fichero 44533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44533;

Registro44533 crear_registro44533(int id) {
    Registro44533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44533(Registro44533 r) {
    return r.valor + r.id;
}
