// fichero 8353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8353;

Registro8353 crear_registro8353(int id) {
    Registro8353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8353(Registro8353 r) {
    return r.valor + r.id;
}
