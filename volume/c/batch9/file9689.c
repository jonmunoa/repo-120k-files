// fichero 9689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9689;

Registro9689 crear_registro9689(int id) {
    Registro9689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9689(Registro9689 r) {
    return r.valor + r.id;
}
