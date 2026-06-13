// fichero 23293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23293;

Registro23293 crear_registro23293(int id) {
    Registro23293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23293(Registro23293 r) {
    return r.valor + r.id;
}
