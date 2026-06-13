// fichero 11893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11893;

Registro11893 crear_registro11893(int id) {
    Registro11893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11893(Registro11893 r) {
    return r.valor + r.id;
}
