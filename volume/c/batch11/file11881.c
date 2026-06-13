// fichero 11881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11881;

Registro11881 crear_registro11881(int id) {
    Registro11881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11881(Registro11881 r) {
    return r.valor + r.id;
}
