// fichero 27161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27161;

Registro27161 crear_registro27161(int id) {
    Registro27161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27161(Registro27161 r) {
    return r.valor + r.id;
}
