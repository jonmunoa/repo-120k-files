// fichero 43781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43781;

Registro43781 crear_registro43781(int id) {
    Registro43781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43781(Registro43781 r) {
    return r.valor + r.id;
}
