// fichero 47225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47225;

Registro47225 crear_registro47225(int id) {
    Registro47225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47225(Registro47225 r) {
    return r.valor + r.id;
}
