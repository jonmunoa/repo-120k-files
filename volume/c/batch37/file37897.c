// fichero 37897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37897;

Registro37897 crear_registro37897(int id) {
    Registro37897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37897(Registro37897 r) {
    return r.valor + r.id;
}
