// fichero 12353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12353;

Registro12353 crear_registro12353(int id) {
    Registro12353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12353(Registro12353 r) {
    return r.valor + r.id;
}
