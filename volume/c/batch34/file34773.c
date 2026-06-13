// fichero 34773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34773;

Registro34773 crear_registro34773(int id) {
    Registro34773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34773(Registro34773 r) {
    return r.valor + r.id;
}
