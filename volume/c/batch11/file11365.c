// fichero 11365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11365;

Registro11365 crear_registro11365(int id) {
    Registro11365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11365(Registro11365 r) {
    return r.valor + r.id;
}
