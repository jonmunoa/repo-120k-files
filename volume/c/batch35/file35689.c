// fichero 35689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35689;

Registro35689 crear_registro35689(int id) {
    Registro35689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35689(Registro35689 r) {
    return r.valor + r.id;
}
