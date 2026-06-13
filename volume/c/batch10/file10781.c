// fichero 10781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10781;

Registro10781 crear_registro10781(int id) {
    Registro10781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10781(Registro10781 r) {
    return r.valor + r.id;
}
