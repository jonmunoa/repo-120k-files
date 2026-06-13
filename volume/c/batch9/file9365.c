// fichero 9365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9365;

Registro9365 crear_registro9365(int id) {
    Registro9365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9365(Registro9365 r) {
    return r.valor + r.id;
}
