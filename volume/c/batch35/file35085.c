// fichero 35085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35085;

Registro35085 crear_registro35085(int id) {
    Registro35085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35085(Registro35085 r) {
    return r.valor + r.id;
}
