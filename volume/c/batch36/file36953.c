// fichero 36953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36953;

Registro36953 crear_registro36953(int id) {
    Registro36953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36953(Registro36953 r) {
    return r.valor + r.id;
}
