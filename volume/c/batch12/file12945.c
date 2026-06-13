// fichero 12945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12945;

Registro12945 crear_registro12945(int id) {
    Registro12945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12945(Registro12945 r) {
    return r.valor + r.id;
}
