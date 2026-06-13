// fichero 44681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44681;

Registro44681 crear_registro44681(int id) {
    Registro44681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44681(Registro44681 r) {
    return r.valor + r.id;
}
