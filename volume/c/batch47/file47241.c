// fichero 47241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47241;

Registro47241 crear_registro47241(int id) {
    Registro47241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47241(Registro47241 r) {
    return r.valor + r.id;
}
