// fichero 9493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9493;

Registro9493 crear_registro9493(int id) {
    Registro9493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9493(Registro9493 r) {
    return r.valor + r.id;
}
