// fichero 11877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11877;

Registro11877 crear_registro11877(int id) {
    Registro11877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11877(Registro11877 r) {
    return r.valor + r.id;
}
