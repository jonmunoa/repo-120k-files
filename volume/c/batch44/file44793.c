// fichero 44793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44793;

Registro44793 crear_registro44793(int id) {
    Registro44793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44793(Registro44793 r) {
    return r.valor + r.id;
}
