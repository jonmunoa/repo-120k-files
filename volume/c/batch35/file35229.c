// fichero 35229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35229;

Registro35229 crear_registro35229(int id) {
    Registro35229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35229(Registro35229 r) {
    return r.valor + r.id;
}
