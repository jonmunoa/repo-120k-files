// fichero 9425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9425;

Registro9425 crear_registro9425(int id) {
    Registro9425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9425(Registro9425 r) {
    return r.valor + r.id;
}
