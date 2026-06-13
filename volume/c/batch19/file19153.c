// fichero 19153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19153;

Registro19153 crear_registro19153(int id) {
    Registro19153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19153(Registro19153 r) {
    return r.valor + r.id;
}
