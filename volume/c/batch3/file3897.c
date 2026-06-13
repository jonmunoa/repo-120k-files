// fichero 3897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3897;

Registro3897 crear_registro3897(int id) {
    Registro3897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3897(Registro3897 r) {
    return r.valor + r.id;
}
