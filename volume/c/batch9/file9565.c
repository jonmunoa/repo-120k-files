// fichero 9565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9565;

Registro9565 crear_registro9565(int id) {
    Registro9565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9565(Registro9565 r) {
    return r.valor + r.id;
}
