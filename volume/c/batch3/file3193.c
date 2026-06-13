// fichero 3193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3193;

Registro3193 crear_registro3193(int id) {
    Registro3193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3193(Registro3193 r) {
    return r.valor + r.id;
}
