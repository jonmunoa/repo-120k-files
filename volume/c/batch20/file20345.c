// fichero 20345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20345;

Registro20345 crear_registro20345(int id) {
    Registro20345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20345(Registro20345 r) {
    return r.valor + r.id;
}
