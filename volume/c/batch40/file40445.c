// fichero 40445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40445;

Registro40445 crear_registro40445(int id) {
    Registro40445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40445(Registro40445 r) {
    return r.valor + r.id;
}
