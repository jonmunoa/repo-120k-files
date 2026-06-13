// fichero 42897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42897;

Registro42897 crear_registro42897(int id) {
    Registro42897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42897(Registro42897 r) {
    return r.valor + r.id;
}
