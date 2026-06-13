// fichero 11285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11285;

Registro11285 crear_registro11285(int id) {
    Registro11285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11285(Registro11285 r) {
    return r.valor + r.id;
}
