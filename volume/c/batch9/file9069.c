// fichero 9069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9069;

Registro9069 crear_registro9069(int id) {
    Registro9069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9069(Registro9069 r) {
    return r.valor + r.id;
}
