// fichero 41085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41085;

Registro41085 crear_registro41085(int id) {
    Registro41085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41085(Registro41085 r) {
    return r.valor + r.id;
}
