// fichero 31085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31085;

Registro31085 crear_registro31085(int id) {
    Registro31085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31085(Registro31085 r) {
    return r.valor + r.id;
}
