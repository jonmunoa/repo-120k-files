// fichero 12649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12649;

Registro12649 crear_registro12649(int id) {
    Registro12649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12649(Registro12649 r) {
    return r.valor + r.id;
}
