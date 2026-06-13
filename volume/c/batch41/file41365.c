// fichero 41365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41365;

Registro41365 crear_registro41365(int id) {
    Registro41365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41365(Registro41365 r) {
    return r.valor + r.id;
}
