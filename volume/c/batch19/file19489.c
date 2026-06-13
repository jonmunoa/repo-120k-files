// fichero 19489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19489;

Registro19489 crear_registro19489(int id) {
    Registro19489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19489(Registro19489 r) {
    return r.valor + r.id;
}
