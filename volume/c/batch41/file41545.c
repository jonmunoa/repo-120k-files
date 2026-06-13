// fichero 41545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41545;

Registro41545 crear_registro41545(int id) {
    Registro41545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41545(Registro41545 r) {
    return r.valor + r.id;
}
