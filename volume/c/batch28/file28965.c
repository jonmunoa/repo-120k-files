// fichero 28965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28965;

Registro28965 crear_registro28965(int id) {
    Registro28965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28965(Registro28965 r) {
    return r.valor + r.id;
}
