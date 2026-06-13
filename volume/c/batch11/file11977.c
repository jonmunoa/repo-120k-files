// fichero 11977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11977;

Registro11977 crear_registro11977(int id) {
    Registro11977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11977(Registro11977 r) {
    return r.valor + r.id;
}
