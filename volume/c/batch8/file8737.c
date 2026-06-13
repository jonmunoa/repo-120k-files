// fichero 8737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8737;

Registro8737 crear_registro8737(int id) {
    Registro8737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8737(Registro8737 r) {
    return r.valor + r.id;
}
