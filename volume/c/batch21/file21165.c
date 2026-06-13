// fichero 21165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21165;

Registro21165 crear_registro21165(int id) {
    Registro21165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21165(Registro21165 r) {
    return r.valor + r.id;
}
