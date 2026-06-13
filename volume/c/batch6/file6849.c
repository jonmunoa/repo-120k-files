// fichero 6849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6849;

Registro6849 crear_registro6849(int id) {
    Registro6849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6849(Registro6849 r) {
    return r.valor + r.id;
}
