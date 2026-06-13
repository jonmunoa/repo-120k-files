// fichero 21289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21289;

Registro21289 crear_registro21289(int id) {
    Registro21289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21289(Registro21289 r) {
    return r.valor + r.id;
}
