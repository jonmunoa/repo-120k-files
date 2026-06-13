// fichero 3501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3501;

Registro3501 crear_registro3501(int id) {
    Registro3501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3501(Registro3501 r) {
    return r.valor + r.id;
}
