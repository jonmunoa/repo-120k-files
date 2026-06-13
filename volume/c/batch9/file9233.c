// fichero 9233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9233;

Registro9233 crear_registro9233(int id) {
    Registro9233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9233(Registro9233 r) {
    return r.valor + r.id;
}
