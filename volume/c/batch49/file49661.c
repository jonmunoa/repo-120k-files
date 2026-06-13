// fichero 49661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49661;

Registro49661 crear_registro49661(int id) {
    Registro49661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49661(Registro49661 r) {
    return r.valor + r.id;
}
