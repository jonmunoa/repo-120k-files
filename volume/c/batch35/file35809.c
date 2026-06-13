// fichero 35809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35809;

Registro35809 crear_registro35809(int id) {
    Registro35809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35809(Registro35809 r) {
    return r.valor + r.id;
}
