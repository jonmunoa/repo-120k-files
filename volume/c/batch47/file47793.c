// fichero 47793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47793;

Registro47793 crear_registro47793(int id) {
    Registro47793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47793(Registro47793 r) {
    return r.valor + r.id;
}
