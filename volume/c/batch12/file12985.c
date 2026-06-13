// fichero 12985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12985;

Registro12985 crear_registro12985(int id) {
    Registro12985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12985(Registro12985 r) {
    return r.valor + r.id;
}
