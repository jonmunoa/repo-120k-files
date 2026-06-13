// fichero 52941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52941;

Registro52941 crear_registro52941(int id) {
    Registro52941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52941(Registro52941 r) {
    return r.valor + r.id;
}
