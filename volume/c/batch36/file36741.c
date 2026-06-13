// fichero 36741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36741;

Registro36741 crear_registro36741(int id) {
    Registro36741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36741(Registro36741 r) {
    return r.valor + r.id;
}
