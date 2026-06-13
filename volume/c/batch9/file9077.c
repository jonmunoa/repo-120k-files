// fichero 9077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9077;

Registro9077 crear_registro9077(int id) {
    Registro9077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9077(Registro9077 r) {
    return r.valor + r.id;
}
