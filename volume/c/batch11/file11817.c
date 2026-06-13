// fichero 11817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11817;

Registro11817 crear_registro11817(int id) {
    Registro11817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11817(Registro11817 r) {
    return r.valor + r.id;
}
