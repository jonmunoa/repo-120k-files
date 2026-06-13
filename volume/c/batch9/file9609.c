// fichero 9609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9609;

Registro9609 crear_registro9609(int id) {
    Registro9609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9609(Registro9609 r) {
    return r.valor + r.id;
}
