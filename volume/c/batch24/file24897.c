// fichero 24897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24897;

Registro24897 crear_registro24897(int id) {
    Registro24897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24897(Registro24897 r) {
    return r.valor + r.id;
}
