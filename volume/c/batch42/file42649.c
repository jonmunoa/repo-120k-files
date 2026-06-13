// fichero 42649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42649;

Registro42649 crear_registro42649(int id) {
    Registro42649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42649(Registro42649 r) {
    return r.valor + r.id;
}
