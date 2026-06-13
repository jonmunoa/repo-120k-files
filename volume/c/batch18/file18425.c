// fichero 18425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18425;

Registro18425 crear_registro18425(int id) {
    Registro18425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18425(Registro18425 r) {
    return r.valor + r.id;
}
