// fichero 777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro777;

Registro777 crear_registro777(int id) {
    Registro777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro777(Registro777 r) {
    return r.valor + r.id;
}
