// fichero 35985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35985;

Registro35985 crear_registro35985(int id) {
    Registro35985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35985(Registro35985 r) {
    return r.valor + r.id;
}
