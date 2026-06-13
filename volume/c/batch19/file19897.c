// fichero 19897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19897;

Registro19897 crear_registro19897(int id) {
    Registro19897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19897(Registro19897 r) {
    return r.valor + r.id;
}
