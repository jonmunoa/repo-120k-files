// fichero 40585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40585;

Registro40585 crear_registro40585(int id) {
    Registro40585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40585(Registro40585 r) {
    return r.valor + r.id;
}
