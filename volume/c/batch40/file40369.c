// fichero 40369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40369;

Registro40369 crear_registro40369(int id) {
    Registro40369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40369(Registro40369 r) {
    return r.valor + r.id;
}
