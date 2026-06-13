// fichero 21793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21793;

Registro21793 crear_registro21793(int id) {
    Registro21793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21793(Registro21793 r) {
    return r.valor + r.id;
}
