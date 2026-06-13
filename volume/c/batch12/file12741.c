// fichero 12741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12741;

Registro12741 crear_registro12741(int id) {
    Registro12741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12741(Registro12741 r) {
    return r.valor + r.id;
}
