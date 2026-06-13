// fichero 35117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35117;

Registro35117 crear_registro35117(int id) {
    Registro35117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35117(Registro35117 r) {
    return r.valor + r.id;
}
