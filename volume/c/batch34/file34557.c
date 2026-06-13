// fichero 34557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34557;

Registro34557 crear_registro34557(int id) {
    Registro34557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34557(Registro34557 r) {
    return r.valor + r.id;
}
