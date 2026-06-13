// fichero 41565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41565;

Registro41565 crear_registro41565(int id) {
    Registro41565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41565(Registro41565 r) {
    return r.valor + r.id;
}
