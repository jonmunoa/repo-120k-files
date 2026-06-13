// fichero 18545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18545;

Registro18545 crear_registro18545(int id) {
    Registro18545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18545(Registro18545 r) {
    return r.valor + r.id;
}
