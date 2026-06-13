// fichero 40817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40817;

Registro40817 crear_registro40817(int id) {
    Registro40817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40817(Registro40817 r) {
    return r.valor + r.id;
}
