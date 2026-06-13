// fichero 9713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9713;

Registro9713 crear_registro9713(int id) {
    Registro9713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9713(Registro9713 r) {
    return r.valor + r.id;
}
