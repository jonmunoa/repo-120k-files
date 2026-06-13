// fichero 11509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11509;

Registro11509 crear_registro11509(int id) {
    Registro11509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11509(Registro11509 r) {
    return r.valor + r.id;
}
