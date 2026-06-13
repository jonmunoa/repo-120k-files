// fichero 36205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36205;

Registro36205 crear_registro36205(int id) {
    Registro36205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36205(Registro36205 r) {
    return r.valor + r.id;
}
