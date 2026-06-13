// fichero 31569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31569;

Registro31569 crear_registro31569(int id) {
    Registro31569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31569(Registro31569 r) {
    return r.valor + r.id;
}
