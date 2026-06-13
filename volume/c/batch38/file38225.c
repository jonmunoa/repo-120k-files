// fichero 38225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38225;

Registro38225 crear_registro38225(int id) {
    Registro38225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38225(Registro38225 r) {
    return r.valor + r.id;
}
