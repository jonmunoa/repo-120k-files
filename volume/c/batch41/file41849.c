// fichero 41849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41849;

Registro41849 crear_registro41849(int id) {
    Registro41849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41849(Registro41849 r) {
    return r.valor + r.id;
}
