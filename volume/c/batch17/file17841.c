// fichero 17841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17841;

Registro17841 crear_registro17841(int id) {
    Registro17841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17841(Registro17841 r) {
    return r.valor + r.id;
}
