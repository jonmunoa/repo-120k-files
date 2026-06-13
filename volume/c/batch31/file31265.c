// fichero 31265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31265;

Registro31265 crear_registro31265(int id) {
    Registro31265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31265(Registro31265 r) {
    return r.valor + r.id;
}
