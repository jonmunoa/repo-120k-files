// fichero 11085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11085;

Registro11085 crear_registro11085(int id) {
    Registro11085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11085(Registro11085 r) {
    return r.valor + r.id;
}
