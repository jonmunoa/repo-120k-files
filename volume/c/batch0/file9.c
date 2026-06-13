// fichero 9 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9;

Registro9 crear_registro9(int id) {
    Registro9 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9(Registro9 r) {
    return r.valor + r.id;
}
