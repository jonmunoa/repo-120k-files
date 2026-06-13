// fichero 35793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35793;

Registro35793 crear_registro35793(int id) {
    Registro35793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35793(Registro35793 r) {
    return r.valor + r.id;
}
