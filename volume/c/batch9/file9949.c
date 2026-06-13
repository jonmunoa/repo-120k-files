// fichero 9949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9949;

Registro9949 crear_registro9949(int id) {
    Registro9949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9949(Registro9949 r) {
    return r.valor + r.id;
}
