// fichero 19953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19953;

Registro19953 crear_registro19953(int id) {
    Registro19953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19953(Registro19953 r) {
    return r.valor + r.id;
}
