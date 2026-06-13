// fichero 21877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21877;

Registro21877 crear_registro21877(int id) {
    Registro21877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21877(Registro21877 r) {
    return r.valor + r.id;
}
