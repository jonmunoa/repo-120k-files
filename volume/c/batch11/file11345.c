// fichero 11345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11345;

Registro11345 crear_registro11345(int id) {
    Registro11345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11345(Registro11345 r) {
    return r.valor + r.id;
}
