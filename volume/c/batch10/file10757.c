// fichero 10757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10757;

Registro10757 crear_registro10757(int id) {
    Registro10757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10757(Registro10757 r) {
    return r.valor + r.id;
}
