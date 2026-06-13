// fichero 53981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53981;

Registro53981 crear_registro53981(int id) {
    Registro53981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53981(Registro53981 r) {
    return r.valor + r.id;
}
