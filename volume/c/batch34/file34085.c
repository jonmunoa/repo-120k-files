// fichero 34085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34085;

Registro34085 crear_registro34085(int id) {
    Registro34085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34085(Registro34085 r) {
    return r.valor + r.id;
}
