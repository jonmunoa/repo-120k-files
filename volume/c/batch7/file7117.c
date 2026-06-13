// fichero 7117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7117;

Registro7117 crear_registro7117(int id) {
    Registro7117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7117(Registro7117 r) {
    return r.valor + r.id;
}
