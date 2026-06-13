// fichero 41205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41205;

Registro41205 crear_registro41205(int id) {
    Registro41205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41205(Registro41205 r) {
    return r.valor + r.id;
}
