// fichero 5777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5777;

Registro5777 crear_registro5777(int id) {
    Registro5777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5777(Registro5777 r) {
    return r.valor + r.id;
}
