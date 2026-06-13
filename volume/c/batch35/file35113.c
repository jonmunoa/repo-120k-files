// fichero 35113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35113;

Registro35113 crear_registro35113(int id) {
    Registro35113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35113(Registro35113 r) {
    return r.valor + r.id;
}
