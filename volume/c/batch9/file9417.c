// fichero 9417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9417;

Registro9417 crear_registro9417(int id) {
    Registro9417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9417(Registro9417 r) {
    return r.valor + r.id;
}
