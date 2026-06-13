// fichero 11205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11205;

Registro11205 crear_registro11205(int id) {
    Registro11205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11205(Registro11205 r) {
    return r.valor + r.id;
}
