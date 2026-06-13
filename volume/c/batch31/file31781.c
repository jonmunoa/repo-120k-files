// fichero 31781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31781;

Registro31781 crear_registro31781(int id) {
    Registro31781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31781(Registro31781 r) {
    return r.valor + r.id;
}
