// fichero 36661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36661;

Registro36661 crear_registro36661(int id) {
    Registro36661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36661(Registro36661 r) {
    return r.valor + r.id;
}
