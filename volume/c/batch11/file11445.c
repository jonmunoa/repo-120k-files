// fichero 11445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11445;

Registro11445 crear_registro11445(int id) {
    Registro11445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11445(Registro11445 r) {
    return r.valor + r.id;
}
