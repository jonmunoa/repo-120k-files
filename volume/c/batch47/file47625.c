// fichero 47625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47625;

Registro47625 crear_registro47625(int id) {
    Registro47625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47625(Registro47625 r) {
    return r.valor + r.id;
}
