// fichero 40365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40365;

Registro40365 crear_registro40365(int id) {
    Registro40365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40365(Registro40365 r) {
    return r.valor + r.id;
}
