// fichero 27229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27229;

Registro27229 crear_registro27229(int id) {
    Registro27229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27229(Registro27229 r) {
    return r.valor + r.id;
}
