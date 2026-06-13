// fichero 44777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44777;

Registro44777 crear_registro44777(int id) {
    Registro44777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44777(Registro44777 r) {
    return r.valor + r.id;
}
