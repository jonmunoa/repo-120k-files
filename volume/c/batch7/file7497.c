// fichero 7497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7497;

Registro7497 crear_registro7497(int id) {
    Registro7497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7497(Registro7497 r) {
    return r.valor + r.id;
}
