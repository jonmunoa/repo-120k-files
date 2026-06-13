// fichero 23853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23853;

Registro23853 crear_registro23853(int id) {
    Registro23853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23853(Registro23853 r) {
    return r.valor + r.id;
}
