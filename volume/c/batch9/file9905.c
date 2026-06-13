// fichero 9905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9905;

Registro9905 crear_registro9905(int id) {
    Registro9905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9905(Registro9905 r) {
    return r.valor + r.id;
}
