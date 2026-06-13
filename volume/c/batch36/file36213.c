// fichero 36213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36213;

Registro36213 crear_registro36213(int id) {
    Registro36213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36213(Registro36213 r) {
    return r.valor + r.id;
}
