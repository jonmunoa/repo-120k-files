// fichero 9797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9797;

Registro9797 crear_registro9797(int id) {
    Registro9797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9797(Registro9797 r) {
    return r.valor + r.id;
}
