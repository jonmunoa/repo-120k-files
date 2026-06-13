// fichero 881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro881;

Registro881 crear_registro881(int id) {
    Registro881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro881(Registro881 r) {
    return r.valor + r.id;
}
