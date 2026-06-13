// fichero 36697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36697;

Registro36697 crear_registro36697(int id) {
    Registro36697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36697(Registro36697 r) {
    return r.valor + r.id;
}
