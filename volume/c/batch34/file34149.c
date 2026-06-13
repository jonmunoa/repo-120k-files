// fichero 34149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34149;

Registro34149 crear_registro34149(int id) {
    Registro34149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34149(Registro34149 r) {
    return r.valor + r.id;
}
