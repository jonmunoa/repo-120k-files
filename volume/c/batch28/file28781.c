// fichero 28781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28781;

Registro28781 crear_registro28781(int id) {
    Registro28781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28781(Registro28781 r) {
    return r.valor + r.id;
}
