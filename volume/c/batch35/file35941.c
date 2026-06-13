// fichero 35941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35941;

Registro35941 crear_registro35941(int id) {
    Registro35941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35941(Registro35941 r) {
    return r.valor + r.id;
}
