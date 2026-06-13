// fichero 11961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11961;

Registro11961 crear_registro11961(int id) {
    Registro11961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11961(Registro11961 r) {
    return r.valor + r.id;
}
