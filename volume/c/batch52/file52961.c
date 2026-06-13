// fichero 52961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52961;

Registro52961 crear_registro52961(int id) {
    Registro52961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52961(Registro52961 r) {
    return r.valor + r.id;
}
