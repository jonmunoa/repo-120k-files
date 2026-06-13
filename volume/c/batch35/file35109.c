// fichero 35109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35109;

Registro35109 crear_registro35109(int id) {
    Registro35109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35109(Registro35109 r) {
    return r.valor + r.id;
}
