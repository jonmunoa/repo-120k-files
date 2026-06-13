// fichero 20041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20041;

Registro20041 crear_registro20041(int id) {
    Registro20041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20041(Registro20041 r) {
    return r.valor + r.id;
}
