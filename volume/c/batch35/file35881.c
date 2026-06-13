// fichero 35881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35881;

Registro35881 crear_registro35881(int id) {
    Registro35881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35881(Registro35881 r) {
    return r.valor + r.id;
}
