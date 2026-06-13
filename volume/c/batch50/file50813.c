// fichero 50813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50813;

Registro50813 crear_registro50813(int id) {
    Registro50813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50813(Registro50813 r) {
    return r.valor + r.id;
}
