// fichero 21037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21037;

Registro21037 crear_registro21037(int id) {
    Registro21037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21037(Registro21037 r) {
    return r.valor + r.id;
}
