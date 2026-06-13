// fichero 42697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42697;

Registro42697 crear_registro42697(int id) {
    Registro42697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42697(Registro42697 r) {
    return r.valor + r.id;
}
