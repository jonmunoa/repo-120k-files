// fichero 53953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53953;

Registro53953 crear_registro53953(int id) {
    Registro53953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53953(Registro53953 r) {
    return r.valor + r.id;
}
