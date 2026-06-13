// fichero 17617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17617;

Registro17617 crear_registro17617(int id) {
    Registro17617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17617(Registro17617 r) {
    return r.valor + r.id;
}
