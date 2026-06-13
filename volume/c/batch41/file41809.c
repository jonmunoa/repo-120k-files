// fichero 41809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41809;

Registro41809 crear_registro41809(int id) {
    Registro41809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41809(Registro41809 r) {
    return r.valor + r.id;
}
