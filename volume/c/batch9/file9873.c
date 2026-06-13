// fichero 9873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9873;

Registro9873 crear_registro9873(int id) {
    Registro9873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9873(Registro9873 r) {
    return r.valor + r.id;
}
