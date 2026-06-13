// fichero 6577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6577;

Registro6577 crear_registro6577(int id) {
    Registro6577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6577(Registro6577 r) {
    return r.valor + r.id;
}
