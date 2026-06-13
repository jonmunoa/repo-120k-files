// fichero 49841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49841;

Registro49841 crear_registro49841(int id) {
    Registro49841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49841(Registro49841 r) {
    return r.valor + r.id;
}
