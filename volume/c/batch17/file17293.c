// fichero 17293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17293;

Registro17293 crear_registro17293(int id) {
    Registro17293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17293(Registro17293 r) {
    return r.valor + r.id;
}
