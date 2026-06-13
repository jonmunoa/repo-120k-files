// fichero 11649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11649;

Registro11649 crear_registro11649(int id) {
    Registro11649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11649(Registro11649 r) {
    return r.valor + r.id;
}
