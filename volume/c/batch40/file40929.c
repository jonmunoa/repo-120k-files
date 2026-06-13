// fichero 40929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40929;

Registro40929 crear_registro40929(int id) {
    Registro40929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40929(Registro40929 r) {
    return r.valor + r.id;
}
