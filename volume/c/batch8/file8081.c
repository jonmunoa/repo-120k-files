// fichero 8081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8081;

Registro8081 crear_registro8081(int id) {
    Registro8081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8081(Registro8081 r) {
    return r.valor + r.id;
}
