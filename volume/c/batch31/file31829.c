// fichero 31829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31829;

Registro31829 crear_registro31829(int id) {
    Registro31829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31829(Registro31829 r) {
    return r.valor + r.id;
}
