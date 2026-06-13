// fichero 11793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11793;

Registro11793 crear_registro11793(int id) {
    Registro11793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11793(Registro11793 r) {
    return r.valor + r.id;
}
