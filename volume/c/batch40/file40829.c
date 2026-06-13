// fichero 40829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40829;

Registro40829 crear_registro40829(int id) {
    Registro40829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40829(Registro40829 r) {
    return r.valor + r.id;
}
