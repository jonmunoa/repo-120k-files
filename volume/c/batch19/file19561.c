// fichero 19561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19561;

Registro19561 crear_registro19561(int id) {
    Registro19561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19561(Registro19561 r) {
    return r.valor + r.id;
}
