// fichero 34165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34165;

Registro34165 crear_registro34165(int id) {
    Registro34165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34165(Registro34165 r) {
    return r.valor + r.id;
}
