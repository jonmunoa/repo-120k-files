// fichero 42333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42333;

Registro42333 crear_registro42333(int id) {
    Registro42333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42333(Registro42333 r) {
    return r.valor + r.id;
}
