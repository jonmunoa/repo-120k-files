// fichero 9773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9773;

Registro9773 crear_registro9773(int id) {
    Registro9773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9773(Registro9773 r) {
    return r.valor + r.id;
}
