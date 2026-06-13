// fichero 26669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26669;

Registro26669 crear_registro26669(int id) {
    Registro26669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26669(Registro26669 r) {
    return r.valor + r.id;
}
