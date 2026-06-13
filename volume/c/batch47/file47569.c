// fichero 47569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47569;

Registro47569 crear_registro47569(int id) {
    Registro47569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47569(Registro47569 r) {
    return r.valor + r.id;
}
