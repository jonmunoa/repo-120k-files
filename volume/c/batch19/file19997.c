// fichero 19997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19997;

Registro19997 crear_registro19997(int id) {
    Registro19997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19997(Registro19997 r) {
    return r.valor + r.id;
}
