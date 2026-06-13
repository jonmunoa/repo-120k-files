// fichero 35197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35197;

Registro35197 crear_registro35197(int id) {
    Registro35197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35197(Registro35197 r) {
    return r.valor + r.id;
}
