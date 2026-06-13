// fichero 53333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53333;

Registro53333 crear_registro53333(int id) {
    Registro53333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53333(Registro53333 r) {
    return r.valor + r.id;
}
