// fichero 17237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17237;

Registro17237 crear_registro17237(int id) {
    Registro17237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17237(Registro17237 r) {
    return r.valor + r.id;
}
