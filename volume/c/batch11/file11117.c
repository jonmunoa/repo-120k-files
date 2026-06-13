// fichero 11117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11117;

Registro11117 crear_registro11117(int id) {
    Registro11117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11117(Registro11117 r) {
    return r.valor + r.id;
}
