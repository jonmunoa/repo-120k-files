// fichero 35669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35669;

Registro35669 crear_registro35669(int id) {
    Registro35669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35669(Registro35669 r) {
    return r.valor + r.id;
}
