// fichero 40845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40845;

Registro40845 crear_registro40845(int id) {
    Registro40845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40845(Registro40845 r) {
    return r.valor + r.id;
}
