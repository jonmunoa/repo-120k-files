// fichero 19177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19177;

Registro19177 crear_registro19177(int id) {
    Registro19177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19177(Registro19177 r) {
    return r.valor + r.id;
}
