// fichero 38897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38897;

Registro38897 crear_registro38897(int id) {
    Registro38897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38897(Registro38897 r) {
    return r.valor + r.id;
}
