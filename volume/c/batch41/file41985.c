// fichero 41985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41985;

Registro41985 crear_registro41985(int id) {
    Registro41985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41985(Registro41985 r) {
    return r.valor + r.id;
}
