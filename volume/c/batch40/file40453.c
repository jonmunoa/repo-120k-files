// fichero 40453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40453;

Registro40453 crear_registro40453(int id) {
    Registro40453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40453(Registro40453 r) {
    return r.valor + r.id;
}
