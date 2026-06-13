// fichero 38981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38981;

Registro38981 crear_registro38981(int id) {
    Registro38981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38981(Registro38981 r) {
    return r.valor + r.id;
}
