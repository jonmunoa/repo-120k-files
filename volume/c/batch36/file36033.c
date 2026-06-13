// fichero 36033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36033;

Registro36033 crear_registro36033(int id) {
    Registro36033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36033(Registro36033 r) {
    return r.valor + r.id;
}
