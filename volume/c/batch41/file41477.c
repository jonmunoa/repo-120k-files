// fichero 41477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41477;

Registro41477 crear_registro41477(int id) {
    Registro41477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41477(Registro41477 r) {
    return r.valor + r.id;
}
