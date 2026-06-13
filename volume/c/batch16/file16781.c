// fichero 16781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16781;

Registro16781 crear_registro16781(int id) {
    Registro16781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16781(Registro16781 r) {
    return r.valor + r.id;
}
