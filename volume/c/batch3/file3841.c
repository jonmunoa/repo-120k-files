// fichero 3841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3841;

Registro3841 crear_registro3841(int id) {
    Registro3841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3841(Registro3841 r) {
    return r.valor + r.id;
}
