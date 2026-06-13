// fichero 949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro949;

Registro949 crear_registro949(int id) {
    Registro949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro949(Registro949 r) {
    return r.valor + r.id;
}
