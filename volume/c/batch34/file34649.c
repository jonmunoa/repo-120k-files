// fichero 34649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34649;

Registro34649 crear_registro34649(int id) {
    Registro34649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34649(Registro34649 r) {
    return r.valor + r.id;
}
