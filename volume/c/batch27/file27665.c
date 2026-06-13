// fichero 27665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27665;

Registro27665 crear_registro27665(int id) {
    Registro27665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27665(Registro27665 r) {
    return r.valor + r.id;
}
