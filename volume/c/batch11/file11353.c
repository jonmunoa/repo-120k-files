// fichero 11353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11353;

Registro11353 crear_registro11353(int id) {
    Registro11353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11353(Registro11353 r) {
    return r.valor + r.id;
}
