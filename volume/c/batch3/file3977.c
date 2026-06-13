// fichero 3977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3977;

Registro3977 crear_registro3977(int id) {
    Registro3977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3977(Registro3977 r) {
    return r.valor + r.id;
}
