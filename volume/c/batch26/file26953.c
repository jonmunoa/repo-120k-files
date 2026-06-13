// fichero 26953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26953;

Registro26953 crear_registro26953(int id) {
    Registro26953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26953(Registro26953 r) {
    return r.valor + r.id;
}
