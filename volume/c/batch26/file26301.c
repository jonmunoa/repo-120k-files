// fichero 26301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26301;

Registro26301 crear_registro26301(int id) {
    Registro26301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26301(Registro26301 r) {
    return r.valor + r.id;
}
