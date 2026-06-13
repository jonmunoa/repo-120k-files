// fichero 35241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35241;

Registro35241 crear_registro35241(int id) {
    Registro35241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35241(Registro35241 r) {
    return r.valor + r.id;
}
