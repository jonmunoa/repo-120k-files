// fichero 11781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11781;

Registro11781 crear_registro11781(int id) {
    Registro11781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11781(Registro11781 r) {
    return r.valor + r.id;
}
