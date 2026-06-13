// fichero 47153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47153;

Registro47153 crear_registro47153(int id) {
    Registro47153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47153(Registro47153 r) {
    return r.valor + r.id;
}
