// fichero 9657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9657;

Registro9657 crear_registro9657(int id) {
    Registro9657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9657(Registro9657 r) {
    return r.valor + r.id;
}
