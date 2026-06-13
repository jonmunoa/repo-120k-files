// fichero 47917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47917;

Registro47917 crear_registro47917(int id) {
    Registro47917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47917(Registro47917 r) {
    return r.valor + r.id;
}
