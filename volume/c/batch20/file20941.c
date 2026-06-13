// fichero 20941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20941;

Registro20941 crear_registro20941(int id) {
    Registro20941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20941(Registro20941 r) {
    return r.valor + r.id;
}
