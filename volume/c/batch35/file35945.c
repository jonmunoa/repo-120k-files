// fichero 35945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35945;

Registro35945 crear_registro35945(int id) {
    Registro35945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35945(Registro35945 r) {
    return r.valor + r.id;
}
