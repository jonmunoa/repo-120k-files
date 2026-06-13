// fichero 52657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52657;

Registro52657 crear_registro52657(int id) {
    Registro52657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52657(Registro52657 r) {
    return r.valor + r.id;
}
