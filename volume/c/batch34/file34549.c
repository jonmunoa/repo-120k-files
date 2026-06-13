// fichero 34549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34549;

Registro34549 crear_registro34549(int id) {
    Registro34549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34549(Registro34549 r) {
    return r.valor + r.id;
}
