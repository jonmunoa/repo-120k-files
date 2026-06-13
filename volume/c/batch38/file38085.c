// fichero 38085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38085;

Registro38085 crear_registro38085(int id) {
    Registro38085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38085(Registro38085 r) {
    return r.valor + r.id;
}
