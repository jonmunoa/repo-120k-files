// fichero 52893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52893;

Registro52893 crear_registro52893(int id) {
    Registro52893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52893(Registro52893 r) {
    return r.valor + r.id;
}
