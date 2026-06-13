// fichero 35913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35913;

Registro35913 crear_registro35913(int id) {
    Registro35913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35913(Registro35913 r) {
    return r.valor + r.id;
}
