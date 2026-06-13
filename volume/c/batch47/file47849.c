// fichero 47849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47849;

Registro47849 crear_registro47849(int id) {
    Registro47849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47849(Registro47849 r) {
    return r.valor + r.id;
}
