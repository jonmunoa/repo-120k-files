// fichero 35545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35545;

Registro35545 crear_registro35545(int id) {
    Registro35545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35545(Registro35545 r) {
    return r.valor + r.id;
}
