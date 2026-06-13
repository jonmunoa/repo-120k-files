// fichero 9693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9693;

Registro9693 crear_registro9693(int id) {
    Registro9693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9693(Registro9693 r) {
    return r.valor + r.id;
}
