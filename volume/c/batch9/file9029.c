// fichero 9029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9029;

Registro9029 crear_registro9029(int id) {
    Registro9029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9029(Registro9029 r) {
    return r.valor + r.id;
}
