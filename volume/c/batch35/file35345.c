// fichero 35345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35345;

Registro35345 crear_registro35345(int id) {
    Registro35345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35345(Registro35345 r) {
    return r.valor + r.id;
}
