// fichero 41533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41533;

Registro41533 crear_registro41533(int id) {
    Registro41533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41533(Registro41533 r) {
    return r.valor + r.id;
}
