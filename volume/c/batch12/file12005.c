// fichero 12005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12005;

Registro12005 crear_registro12005(int id) {
    Registro12005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12005(Registro12005 r) {
    return r.valor + r.id;
}
