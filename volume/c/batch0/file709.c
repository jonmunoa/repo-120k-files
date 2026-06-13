// fichero 709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro709;

Registro709 crear_registro709(int id) {
    Registro709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro709(Registro709 r) {
    return r.valor + r.id;
}
