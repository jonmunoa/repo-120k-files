// fichero 41805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41805;

Registro41805 crear_registro41805(int id) {
    Registro41805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41805(Registro41805 r) {
    return r.valor + r.id;
}
