// fichero 30897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30897;

Registro30897 crear_registro30897(int id) {
    Registro30897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30897(Registro30897 r) {
    return r.valor + r.id;
}
