// fichero 34381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34381;

Registro34381 crear_registro34381(int id) {
    Registro34381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34381(Registro34381 r) {
    return r.valor + r.id;
}
