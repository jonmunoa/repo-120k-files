// fichero 44781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44781;

Registro44781 crear_registro44781(int id) {
    Registro44781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44781(Registro44781 r) {
    return r.valor + r.id;
}
