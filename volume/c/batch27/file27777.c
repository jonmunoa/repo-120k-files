// fichero 27777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27777;

Registro27777 crear_registro27777(int id) {
    Registro27777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27777(Registro27777 r) {
    return r.valor + r.id;
}
