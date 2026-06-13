// fichero 21837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21837;

Registro21837 crear_registro21837(int id) {
    Registro21837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21837(Registro21837 r) {
    return r.valor + r.id;
}
