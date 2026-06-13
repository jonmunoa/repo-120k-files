// fichero 35593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35593;

Registro35593 crear_registro35593(int id) {
    Registro35593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35593(Registro35593 r) {
    return r.valor + r.id;
}
