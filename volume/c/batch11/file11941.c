// fichero 11941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11941;

Registro11941 crear_registro11941(int id) {
    Registro11941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11941(Registro11941 r) {
    return r.valor + r.id;
}
