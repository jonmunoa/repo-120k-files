// fichero 11109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11109;

Registro11109 crear_registro11109(int id) {
    Registro11109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11109(Registro11109 r) {
    return r.valor + r.id;
}
