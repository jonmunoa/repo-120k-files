// fichero 37993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37993;

Registro37993 crear_registro37993(int id) {
    Registro37993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37993(Registro37993 r) {
    return r.valor + r.id;
}
