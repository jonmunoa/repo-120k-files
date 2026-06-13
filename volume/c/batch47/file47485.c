// fichero 47485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47485;

Registro47485 crear_registro47485(int id) {
    Registro47485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47485(Registro47485 r) {
    return r.valor + r.id;
}
