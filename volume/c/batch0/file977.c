// fichero 977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro977;

Registro977 crear_registro977(int id) {
    Registro977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro977(Registro977 r) {
    return r.valor + r.id;
}
