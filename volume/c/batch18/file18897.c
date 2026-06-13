// fichero 18897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18897;

Registro18897 crear_registro18897(int id) {
    Registro18897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18897(Registro18897 r) {
    return r.valor + r.id;
}
