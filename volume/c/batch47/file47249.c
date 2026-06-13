// fichero 47249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47249;

Registro47249 crear_registro47249(int id) {
    Registro47249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47249(Registro47249 r) {
    return r.valor + r.id;
}
