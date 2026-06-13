// fichero 11513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11513;

Registro11513 crear_registro11513(int id) {
    Registro11513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11513(Registro11513 r) {
    return r.valor + r.id;
}
