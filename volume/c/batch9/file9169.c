// fichero 9169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9169;

Registro9169 crear_registro9169(int id) {
    Registro9169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9169(Registro9169 r) {
    return r.valor + r.id;
}
