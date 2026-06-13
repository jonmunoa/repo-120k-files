// fichero 4085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4085;

Registro4085 crear_registro4085(int id) {
    Registro4085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4085(Registro4085 r) {
    return r.valor + r.id;
}
