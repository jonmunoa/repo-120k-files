// fichero 9829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9829;

Registro9829 crear_registro9829(int id) {
    Registro9829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9829(Registro9829 r) {
    return r.valor + r.id;
}
