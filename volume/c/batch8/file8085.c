// fichero 8085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8085;

Registro8085 crear_registro8085(int id) {
    Registro8085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8085(Registro8085 r) {
    return r.valor + r.id;
}
