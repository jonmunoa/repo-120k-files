// fichero 41773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41773;

Registro41773 crear_registro41773(int id) {
    Registro41773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41773(Registro41773 r) {
    return r.valor + r.id;
}
