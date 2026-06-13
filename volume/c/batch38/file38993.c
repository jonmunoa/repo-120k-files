// fichero 38993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38993;

Registro38993 crear_registro38993(int id) {
    Registro38993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38993(Registro38993 r) {
    return r.valor + r.id;
}
