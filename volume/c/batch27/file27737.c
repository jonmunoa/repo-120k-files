// fichero 27737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27737;

Registro27737 crear_registro27737(int id) {
    Registro27737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27737(Registro27737 r) {
    return r.valor + r.id;
}
