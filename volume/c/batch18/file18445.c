// fichero 18445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18445;

Registro18445 crear_registro18445(int id) {
    Registro18445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18445(Registro18445 r) {
    return r.valor + r.id;
}
