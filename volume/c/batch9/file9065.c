// fichero 9065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9065;

Registro9065 crear_registro9065(int id) {
    Registro9065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9065(Registro9065 r) {
    return r.valor + r.id;
}
