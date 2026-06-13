// fichero 11837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11837;

Registro11837 crear_registro11837(int id) {
    Registro11837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11837(Registro11837 r) {
    return r.valor + r.id;
}
