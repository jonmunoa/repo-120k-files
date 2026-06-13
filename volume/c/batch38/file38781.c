// fichero 38781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38781;

Registro38781 crear_registro38781(int id) {
    Registro38781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38781(Registro38781 r) {
    return r.valor + r.id;
}
