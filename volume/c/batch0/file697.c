// fichero 697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro697;

Registro697 crear_registro697(int id) {
    Registro697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro697(Registro697 r) {
    return r.valor + r.id;
}
