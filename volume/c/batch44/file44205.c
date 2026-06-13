// fichero 44205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44205;

Registro44205 crear_registro44205(int id) {
    Registro44205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44205(Registro44205 r) {
    return r.valor + r.id;
}
