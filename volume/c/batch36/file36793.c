// fichero 36793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36793;

Registro36793 crear_registro36793(int id) {
    Registro36793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36793(Registro36793 r) {
    return r.valor + r.id;
}
