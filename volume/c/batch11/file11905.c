// fichero 11905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11905;

Registro11905 crear_registro11905(int id) {
    Registro11905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11905(Registro11905 r) {
    return r.valor + r.id;
}
