// fichero 9209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9209;

Registro9209 crear_registro9209(int id) {
    Registro9209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9209(Registro9209 r) {
    return r.valor + r.id;
}
