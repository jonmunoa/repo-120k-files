// fichero 36781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36781;

Registro36781 crear_registro36781(int id) {
    Registro36781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36781(Registro36781 r) {
    return r.valor + r.id;
}
