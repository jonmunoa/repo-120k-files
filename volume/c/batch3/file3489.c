// fichero 3489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3489;

Registro3489 crear_registro3489(int id) {
    Registro3489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3489(Registro3489 r) {
    return r.valor + r.id;
}
