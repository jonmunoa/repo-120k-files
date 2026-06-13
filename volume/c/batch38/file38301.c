// fichero 38301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38301;

Registro38301 crear_registro38301(int id) {
    Registro38301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38301(Registro38301 r) {
    return r.valor + r.id;
}
