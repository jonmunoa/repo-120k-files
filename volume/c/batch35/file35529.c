// fichero 35529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35529;

Registro35529 crear_registro35529(int id) {
    Registro35529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35529(Registro35529 r) {
    return r.valor + r.id;
}
