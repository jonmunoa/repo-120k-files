// fichero 53777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53777;

Registro53777 crear_registro53777(int id) {
    Registro53777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53777(Registro53777 r) {
    return r.valor + r.id;
}
