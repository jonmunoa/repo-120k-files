// fichero 22777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22777;

Registro22777 crear_registro22777(int id) {
    Registro22777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22777(Registro22777 r) {
    return r.valor + r.id;
}
