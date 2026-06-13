// fichero 52345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52345;

Registro52345 crear_registro52345(int id) {
    Registro52345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52345(Registro52345 r) {
    return r.valor + r.id;
}
