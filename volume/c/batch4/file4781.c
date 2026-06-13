// fichero 4781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4781;

Registro4781 crear_registro4781(int id) {
    Registro4781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4781(Registro4781 r) {
    return r.valor + r.id;
}
