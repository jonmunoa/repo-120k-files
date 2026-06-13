// fichero 49445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49445;

Registro49445 crear_registro49445(int id) {
    Registro49445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49445(Registro49445 r) {
    return r.valor + r.id;
}
