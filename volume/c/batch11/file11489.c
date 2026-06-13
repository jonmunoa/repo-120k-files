// fichero 11489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11489;

Registro11489 crear_registro11489(int id) {
    Registro11489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11489(Registro11489 r) {
    return r.valor + r.id;
}
