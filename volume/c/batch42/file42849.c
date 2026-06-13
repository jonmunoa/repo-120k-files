// fichero 42849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42849;

Registro42849 crear_registro42849(int id) {
    Registro42849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42849(Registro42849 r) {
    return r.valor + r.id;
}
