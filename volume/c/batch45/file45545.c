// fichero 45545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45545;

Registro45545 crear_registro45545(int id) {
    Registro45545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45545(Registro45545 r) {
    return r.valor + r.id;
}
