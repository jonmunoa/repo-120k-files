// fichero 30533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30533;

Registro30533 crear_registro30533(int id) {
    Registro30533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30533(Registro30533 r) {
    return r.valor + r.id;
}
