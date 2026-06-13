// fichero 35305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35305;

Registro35305 crear_registro35305(int id) {
    Registro35305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35305(Registro35305 r) {
    return r.valor + r.id;
}
