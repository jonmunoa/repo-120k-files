// fichero 40229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40229;

Registro40229 crear_registro40229(int id) {
    Registro40229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40229(Registro40229 r) {
    return r.valor + r.id;
}
