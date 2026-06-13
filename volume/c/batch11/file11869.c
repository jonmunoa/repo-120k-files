// fichero 11869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11869;

Registro11869 crear_registro11869(int id) {
    Registro11869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11869(Registro11869 r) {
    return r.valor + r.id;
}
