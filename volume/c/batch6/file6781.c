// fichero 6781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6781;

Registro6781 crear_registro6781(int id) {
    Registro6781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6781(Registro6781 r) {
    return r.valor + r.id;
}
