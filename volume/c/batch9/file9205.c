// fichero 9205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9205;

Registro9205 crear_registro9205(int id) {
    Registro9205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9205(Registro9205 r) {
    return r.valor + r.id;
}
