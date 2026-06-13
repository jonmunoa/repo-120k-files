// fichero 9261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9261;

Registro9261 crear_registro9261(int id) {
    Registro9261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9261(Registro9261 r) {
    return r.valor + r.id;
}
