// fichero 9789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9789;

Registro9789 crear_registro9789(int id) {
    Registro9789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9789(Registro9789 r) {
    return r.valor + r.id;
}
