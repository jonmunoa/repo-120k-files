// fichero 27193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27193;

Registro27193 crear_registro27193(int id) {
    Registro27193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27193(Registro27193 r) {
    return r.valor + r.id;
}
