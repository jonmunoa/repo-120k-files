// fichero 35161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35161;

Registro35161 crear_registro35161(int id) {
    Registro35161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35161(Registro35161 r) {
    return r.valor + r.id;
}
