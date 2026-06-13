// fichero 8577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8577;

Registro8577 crear_registro8577(int id) {
    Registro8577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8577(Registro8577 r) {
    return r.valor + r.id;
}
