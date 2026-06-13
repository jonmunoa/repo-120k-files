// fichero 9745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9745;

Registro9745 crear_registro9745(int id) {
    Registro9745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9745(Registro9745 r) {
    return r.valor + r.id;
}
