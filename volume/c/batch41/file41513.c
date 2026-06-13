// fichero 41513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41513;

Registro41513 crear_registro41513(int id) {
    Registro41513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41513(Registro41513 r) {
    return r.valor + r.id;
}
