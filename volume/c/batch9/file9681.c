// fichero 9681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9681;

Registro9681 crear_registro9681(int id) {
    Registro9681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9681(Registro9681 r) {
    return r.valor + r.id;
}
