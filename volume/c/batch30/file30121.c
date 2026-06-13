// fichero 30121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30121;

Registro30121 crear_registro30121(int id) {
    Registro30121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30121(Registro30121 r) {
    return r.valor + r.id;
}
