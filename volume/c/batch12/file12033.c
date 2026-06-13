// fichero 12033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12033;

Registro12033 crear_registro12033(int id) {
    Registro12033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12033(Registro12033 r) {
    return r.valor + r.id;
}
