// fichero 36693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36693;

Registro36693 crear_registro36693(int id) {
    Registro36693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36693(Registro36693 r) {
    return r.valor + r.id;
}
