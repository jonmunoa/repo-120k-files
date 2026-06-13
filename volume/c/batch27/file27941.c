// fichero 27941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27941;

Registro27941 crear_registro27941(int id) {
    Registro27941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27941(Registro27941 r) {
    return r.valor + r.id;
}
