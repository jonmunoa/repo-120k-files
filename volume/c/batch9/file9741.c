// fichero 9741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9741;

Registro9741 crear_registro9741(int id) {
    Registro9741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9741(Registro9741 r) {
    return r.valor + r.id;
}
