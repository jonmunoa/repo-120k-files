// fichero 35737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35737;

Registro35737 crear_registro35737(int id) {
    Registro35737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35737(Registro35737 r) {
    return r.valor + r.id;
}
