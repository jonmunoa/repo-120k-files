// fichero 8161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8161;

Registro8161 crear_registro8161(int id) {
    Registro8161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8161(Registro8161 r) {
    return r.valor + r.id;
}
