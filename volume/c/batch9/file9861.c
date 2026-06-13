// fichero 9861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9861;

Registro9861 crear_registro9861(int id) {
    Registro9861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9861(Registro9861 r) {
    return r.valor + r.id;
}
