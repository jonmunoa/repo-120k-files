// fichero 27681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27681;

Registro27681 crear_registro27681(int id) {
    Registro27681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27681(Registro27681 r) {
    return r.valor + r.id;
}
