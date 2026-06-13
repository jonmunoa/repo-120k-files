// fichero 9593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9593;

Registro9593 crear_registro9593(int id) {
    Registro9593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9593(Registro9593 r) {
    return r.valor + r.id;
}
