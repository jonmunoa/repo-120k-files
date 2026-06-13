// fichero 18929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18929;

Registro18929 crear_registro18929(int id) {
    Registro18929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18929(Registro18929 r) {
    return r.valor + r.id;
}
