// fichero 20793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20793;

Registro20793 crear_registro20793(int id) {
    Registro20793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20793(Registro20793 r) {
    return r.valor + r.id;
}
