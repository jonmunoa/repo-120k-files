// fichero 34969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34969;

Registro34969 crear_registro34969(int id) {
    Registro34969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34969(Registro34969 r) {
    return r.valor + r.id;
}
