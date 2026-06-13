// fichero 49781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49781;

Registro49781 crear_registro49781(int id) {
    Registro49781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49781(Registro49781 r) {
    return r.valor + r.id;
}
