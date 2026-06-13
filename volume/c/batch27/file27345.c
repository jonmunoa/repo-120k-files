// fichero 27345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27345;

Registro27345 crear_registro27345(int id) {
    Registro27345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27345(Registro27345 r) {
    return r.valor + r.id;
}
