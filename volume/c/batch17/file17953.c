// fichero 17953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17953;

Registro17953 crear_registro17953(int id) {
    Registro17953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17953(Registro17953 r) {
    return r.valor + r.id;
}
