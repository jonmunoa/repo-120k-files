// fichero 44965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44965;

Registro44965 crear_registro44965(int id) {
    Registro44965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44965(Registro44965 r) {
    return r.valor + r.id;
}
