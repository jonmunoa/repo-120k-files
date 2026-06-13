// fichero 9193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9193;

Registro9193 crear_registro9193(int id) {
    Registro9193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9193(Registro9193 r) {
    return r.valor + r.id;
}
