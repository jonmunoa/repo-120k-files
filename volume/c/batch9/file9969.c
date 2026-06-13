// fichero 9969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9969;

Registro9969 crear_registro9969(int id) {
    Registro9969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9969(Registro9969 r) {
    return r.valor + r.id;
}
