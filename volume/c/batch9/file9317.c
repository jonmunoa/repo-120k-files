// fichero 9317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9317;

Registro9317 crear_registro9317(int id) {
    Registro9317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9317(Registro9317 r) {
    return r.valor + r.id;
}
