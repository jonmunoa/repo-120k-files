// fichero 41681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41681;

Registro41681 crear_registro41681(int id) {
    Registro41681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41681(Registro41681 r) {
    return r.valor + r.id;
}
