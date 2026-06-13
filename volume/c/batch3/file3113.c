// fichero 3113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3113;

Registro3113 crear_registro3113(int id) {
    Registro3113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3113(Registro3113 r) {
    return r.valor + r.id;
}
