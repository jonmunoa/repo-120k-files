// fichero 41425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41425;

Registro41425 crear_registro41425(int id) {
    Registro41425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41425(Registro41425 r) {
    return r.valor + r.id;
}
