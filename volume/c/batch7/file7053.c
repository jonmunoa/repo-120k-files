// fichero 7053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7053;

Registro7053 crear_registro7053(int id) {
    Registro7053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7053(Registro7053 r) {
    return r.valor + r.id;
}
