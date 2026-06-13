// fichero 12821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12821;

Registro12821 crear_registro12821(int id) {
    Registro12821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12821(Registro12821 r) {
    return r.valor + r.id;
}
