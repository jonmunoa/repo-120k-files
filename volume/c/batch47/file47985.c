// fichero 47985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47985;

Registro47985 crear_registro47985(int id) {
    Registro47985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47985(Registro47985 r) {
    return r.valor + r.id;
}
