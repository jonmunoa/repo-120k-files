// fichero 47293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47293;

Registro47293 crear_registro47293(int id) {
    Registro47293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47293(Registro47293 r) {
    return r.valor + r.id;
}
