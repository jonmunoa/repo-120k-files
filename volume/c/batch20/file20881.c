// fichero 20881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20881;

Registro20881 crear_registro20881(int id) {
    Registro20881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20881(Registro20881 r) {
    return r.valor + r.id;
}
