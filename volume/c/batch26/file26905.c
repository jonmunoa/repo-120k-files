// fichero 26905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26905;

Registro26905 crear_registro26905(int id) {
    Registro26905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26905(Registro26905 r) {
    return r.valor + r.id;
}
