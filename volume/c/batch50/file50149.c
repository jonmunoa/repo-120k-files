// fichero 50149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50149;

Registro50149 crear_registro50149(int id) {
    Registro50149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50149(Registro50149 r) {
    return r.valor + r.id;
}
