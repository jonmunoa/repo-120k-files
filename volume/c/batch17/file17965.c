// fichero 17965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17965;

Registro17965 crear_registro17965(int id) {
    Registro17965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17965(Registro17965 r) {
    return r.valor + r.id;
}
