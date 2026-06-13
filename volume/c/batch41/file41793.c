// fichero 41793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41793;

Registro41793 crear_registro41793(int id) {
    Registro41793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41793(Registro41793 r) {
    return r.valor + r.id;
}
