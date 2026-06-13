// fichero 50621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50621;

Registro50621 crear_registro50621(int id) {
    Registro50621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50621(Registro50621 r) {
    return r.valor + r.id;
}
