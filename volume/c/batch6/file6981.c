// fichero 6981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6981;

Registro6981 crear_registro6981(int id) {
    Registro6981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6981(Registro6981 r) {
    return r.valor + r.id;
}
