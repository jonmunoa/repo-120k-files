// fichero 9677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9677;

Registro9677 crear_registro9677(int id) {
    Registro9677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9677(Registro9677 r) {
    return r.valor + r.id;
}
