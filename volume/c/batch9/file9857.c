// fichero 9857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9857;

Registro9857 crear_registro9857(int id) {
    Registro9857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9857(Registro9857 r) {
    return r.valor + r.id;
}
