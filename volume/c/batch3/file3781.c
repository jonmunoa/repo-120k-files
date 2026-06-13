// fichero 3781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3781;

Registro3781 crear_registro3781(int id) {
    Registro3781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3781(Registro3781 r) {
    return r.valor + r.id;
}
