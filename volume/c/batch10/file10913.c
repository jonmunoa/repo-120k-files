// fichero 10913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10913;

Registro10913 crear_registro10913(int id) {
    Registro10913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10913(Registro10913 r) {
    return r.valor + r.id;
}
