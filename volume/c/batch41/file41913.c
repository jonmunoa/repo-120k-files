// fichero 41913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41913;

Registro41913 crear_registro41913(int id) {
    Registro41913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41913(Registro41913 r) {
    return r.valor + r.id;
}
