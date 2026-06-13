// fichero 53781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53781;

Registro53781 crear_registro53781(int id) {
    Registro53781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53781(Registro53781 r) {
    return r.valor + r.id;
}
