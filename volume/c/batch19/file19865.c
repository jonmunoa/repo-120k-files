// fichero 19865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19865;

Registro19865 crear_registro19865(int id) {
    Registro19865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19865(Registro19865 r) {
    return r.valor + r.id;
}
