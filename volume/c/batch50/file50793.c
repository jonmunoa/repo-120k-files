// fichero 50793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50793;

Registro50793 crear_registro50793(int id) {
    Registro50793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50793(Registro50793 r) {
    return r.valor + r.id;
}
