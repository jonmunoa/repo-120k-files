// fichero 9617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9617;

Registro9617 crear_registro9617(int id) {
    Registro9617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9617(Registro9617 r) {
    return r.valor + r.id;
}
