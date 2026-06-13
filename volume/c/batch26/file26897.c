// fichero 26897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26897;

Registro26897 crear_registro26897(int id) {
    Registro26897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26897(Registro26897 r) {
    return r.valor + r.id;
}
