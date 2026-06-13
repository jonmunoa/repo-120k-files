// fichero 11829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11829;

Registro11829 crear_registro11829(int id) {
    Registro11829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11829(Registro11829 r) {
    return r.valor + r.id;
}
