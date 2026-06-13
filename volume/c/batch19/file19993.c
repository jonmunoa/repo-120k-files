// fichero 19993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19993;

Registro19993 crear_registro19993(int id) {
    Registro19993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19993(Registro19993 r) {
    return r.valor + r.id;
}
