// fichero 47181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47181;

Registro47181 crear_registro47181(int id) {
    Registro47181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47181(Registro47181 r) {
    return r.valor + r.id;
}
