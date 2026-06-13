// fichero 3753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3753;

Registro3753 crear_registro3753(int id) {
    Registro3753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3753(Registro3753 r) {
    return r.valor + r.id;
}
