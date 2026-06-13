// fichero 21161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21161;

Registro21161 crear_registro21161(int id) {
    Registro21161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21161(Registro21161 r) {
    return r.valor + r.id;
}
