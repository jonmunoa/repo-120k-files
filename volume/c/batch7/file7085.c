// fichero 7085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7085;

Registro7085 crear_registro7085(int id) {
    Registro7085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7085(Registro7085 r) {
    return r.valor + r.id;
}
