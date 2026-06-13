// fichero 17193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17193;

Registro17193 crear_registro17193(int id) {
    Registro17193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17193(Registro17193 r) {
    return r.valor + r.id;
}
