// fichero 9129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9129;

Registro9129 crear_registro9129(int id) {
    Registro9129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9129(Registro9129 r) {
    return r.valor + r.id;
}
