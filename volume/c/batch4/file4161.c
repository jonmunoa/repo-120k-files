// fichero 4161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4161;

Registro4161 crear_registro4161(int id) {
    Registro4161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4161(Registro4161 r) {
    return r.valor + r.id;
}
