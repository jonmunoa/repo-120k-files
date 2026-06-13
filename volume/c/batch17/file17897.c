// fichero 17897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17897;

Registro17897 crear_registro17897(int id) {
    Registro17897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17897(Registro17897 r) {
    return r.valor + r.id;
}
