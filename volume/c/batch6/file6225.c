// fichero 6225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6225;

Registro6225 crear_registro6225(int id) {
    Registro6225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6225(Registro6225 r) {
    return r.valor + r.id;
}
