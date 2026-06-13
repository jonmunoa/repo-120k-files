// fichero 6785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6785;

Registro6785 crear_registro6785(int id) {
    Registro6785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6785(Registro6785 r) {
    return r.valor + r.id;
}
