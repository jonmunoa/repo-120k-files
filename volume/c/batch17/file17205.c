// fichero 17205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17205;

Registro17205 crear_registro17205(int id) {
    Registro17205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17205(Registro17205 r) {
    return r.valor + r.id;
}
