// fichero 24777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24777;

Registro24777 crear_registro24777(int id) {
    Registro24777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24777(Registro24777 r) {
    return r.valor + r.id;
}
