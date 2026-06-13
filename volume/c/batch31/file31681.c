// fichero 31681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31681;

Registro31681 crear_registro31681(int id) {
    Registro31681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31681(Registro31681 r) {
    return r.valor + r.id;
}
