// fichero 9613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9613;

Registro9613 crear_registro9613(int id) {
    Registro9613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9613(Registro9613 r) {
    return r.valor + r.id;
}
