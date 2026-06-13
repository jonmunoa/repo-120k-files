// fichero 36941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36941;

Registro36941 crear_registro36941(int id) {
    Registro36941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36941(Registro36941 r) {
    return r.valor + r.id;
}
