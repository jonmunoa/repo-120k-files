// fichero 20985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20985;

Registro20985 crear_registro20985(int id) {
    Registro20985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20985(Registro20985 r) {
    return r.valor + r.id;
}
