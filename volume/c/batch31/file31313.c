// fichero 31313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31313;

Registro31313 crear_registro31313(int id) {
    Registro31313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31313(Registro31313 r) {
    return r.valor + r.id;
}
