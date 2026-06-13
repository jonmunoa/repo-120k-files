// fichero 31169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31169;

Registro31169 crear_registro31169(int id) {
    Registro31169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31169(Registro31169 r) {
    return r.valor + r.id;
}
