// fichero 49773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49773;

Registro49773 crear_registro49773(int id) {
    Registro49773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49773(Registro49773 r) {
    return r.valor + r.id;
}
