// fichero 47809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47809;

Registro47809 crear_registro47809(int id) {
    Registro47809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47809(Registro47809 r) {
    return r.valor + r.id;
}
