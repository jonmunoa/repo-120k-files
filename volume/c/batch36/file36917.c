// fichero 36917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36917;

Registro36917 crear_registro36917(int id) {
    Registro36917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36917(Registro36917 r) {
    return r.valor + r.id;
}
