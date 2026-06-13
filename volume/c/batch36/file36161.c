// fichero 36161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36161;

Registro36161 crear_registro36161(int id) {
    Registro36161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36161(Registro36161 r) {
    return r.valor + r.id;
}
