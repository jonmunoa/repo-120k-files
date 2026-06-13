// fichero 34781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34781;

Registro34781 crear_registro34781(int id) {
    Registro34781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34781(Registro34781 r) {
    return r.valor + r.id;
}
