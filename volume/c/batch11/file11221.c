// fichero 11221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11221;

Registro11221 crear_registro11221(int id) {
    Registro11221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11221(Registro11221 r) {
    return r.valor + r.id;
}
