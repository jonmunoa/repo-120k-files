// fichero 9281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9281;

Registro9281 crear_registro9281(int id) {
    Registro9281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9281(Registro9281 r) {
    return r.valor + r.id;
}
