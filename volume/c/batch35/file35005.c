// fichero 35005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35005;

Registro35005 crear_registro35005(int id) {
    Registro35005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35005(Registro35005 r) {
    return r.valor + r.id;
}
