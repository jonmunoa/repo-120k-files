// fichero 8777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8777;

Registro8777 crear_registro8777(int id) {
    Registro8777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8777(Registro8777 r) {
    return r.valor + r.id;
}
