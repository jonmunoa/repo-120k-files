// fichero 11229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11229;

Registro11229 crear_registro11229(int id) {
    Registro11229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11229(Registro11229 r) {
    return r.valor + r.id;
}
