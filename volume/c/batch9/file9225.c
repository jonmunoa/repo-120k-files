// fichero 9225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9225;

Registro9225 crear_registro9225(int id) {
    Registro9225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9225(Registro9225 r) {
    return r.valor + r.id;
}
