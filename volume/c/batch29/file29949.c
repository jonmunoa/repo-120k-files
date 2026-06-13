// fichero 29949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29949;

Registro29949 crear_registro29949(int id) {
    Registro29949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29949(Registro29949 r) {
    return r.valor + r.id;
}
