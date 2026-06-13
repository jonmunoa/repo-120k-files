// fichero 11417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11417;

Registro11417 crear_registro11417(int id) {
    Registro11417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11417(Registro11417 r) {
    return r.valor + r.id;
}
