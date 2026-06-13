// fichero 3445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3445;

Registro3445 crear_registro3445(int id) {
    Registro3445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3445(Registro3445 r) {
    return r.valor + r.id;
}
