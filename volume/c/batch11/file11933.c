// fichero 11933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11933;

Registro11933 crear_registro11933(int id) {
    Registro11933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11933(Registro11933 r) {
    return r.valor + r.id;
}
