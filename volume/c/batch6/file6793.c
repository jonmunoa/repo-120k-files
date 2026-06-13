// fichero 6793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6793;

Registro6793 crear_registro6793(int id) {
    Registro6793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6793(Registro6793 r) {
    return r.valor + r.id;
}
