// fichero 34509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34509;

Registro34509 crear_registro34509(int id) {
    Registro34509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34509(Registro34509 r) {
    return r.valor + r.id;
}
