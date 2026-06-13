// fichero 24669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24669;

Registro24669 crear_registro24669(int id) {
    Registro24669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24669(Registro24669 r) {
    return r.valor + r.id;
}
