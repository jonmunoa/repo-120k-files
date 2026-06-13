// fichero 19941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19941;

Registro19941 crear_registro19941(int id) {
    Registro19941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19941(Registro19941 r) {
    return r.valor + r.id;
}
