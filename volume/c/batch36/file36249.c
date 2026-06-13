// fichero 36249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36249;

Registro36249 crear_registro36249(int id) {
    Registro36249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36249(Registro36249 r) {
    return r.valor + r.id;
}
