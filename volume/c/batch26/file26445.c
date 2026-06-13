// fichero 26445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26445;

Registro26445 crear_registro26445(int id) {
    Registro26445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26445(Registro26445 r) {
    return r.valor + r.id;
}
