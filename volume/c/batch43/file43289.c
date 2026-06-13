// fichero 43289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43289;

Registro43289 crear_registro43289(int id) {
    Registro43289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43289(Registro43289 r) {
    return r.valor + r.id;
}
