// fichero 35877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35877;

Registro35877 crear_registro35877(int id) {
    Registro35877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35877(Registro35877 r) {
    return r.valor + r.id;
}
