// fichero 44737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44737;

Registro44737 crear_registro44737(int id) {
    Registro44737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44737(Registro44737 r) {
    return r.valor + r.id;
}
