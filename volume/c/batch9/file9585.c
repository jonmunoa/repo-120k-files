// fichero 9585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9585;

Registro9585 crear_registro9585(int id) {
    Registro9585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9585(Registro9585 r) {
    return r.valor + r.id;
}
