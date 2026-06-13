// fichero 11897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11897;

Registro11897 crear_registro11897(int id) {
    Registro11897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11897(Registro11897 r) {
    return r.valor + r.id;
}
