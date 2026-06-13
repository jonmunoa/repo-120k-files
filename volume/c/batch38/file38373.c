// fichero 38373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38373;

Registro38373 crear_registro38373(int id) {
    Registro38373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38373(Registro38373 r) {
    return r.valor + r.id;
}
