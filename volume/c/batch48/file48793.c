// fichero 48793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48793;

Registro48793 crear_registro48793(int id) {
    Registro48793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48793(Registro48793 r) {
    return r.valor + r.id;
}
