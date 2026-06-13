// fichero 44949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44949;

Registro44949 crear_registro44949(int id) {
    Registro44949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44949(Registro44949 r) {
    return r.valor + r.id;
}
