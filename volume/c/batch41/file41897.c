// fichero 41897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41897;

Registro41897 crear_registro41897(int id) {
    Registro41897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41897(Registro41897 r) {
    return r.valor + r.id;
}
