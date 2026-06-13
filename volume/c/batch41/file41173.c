// fichero 41173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41173;

Registro41173 crear_registro41173(int id) {
    Registro41173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41173(Registro41173 r) {
    return r.valor + r.id;
}
