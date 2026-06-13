// fichero 1809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1809;

Registro1809 crear_registro1809(int id) {
    Registro1809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1809(Registro1809 r) {
    return r.valor + r.id;
}
