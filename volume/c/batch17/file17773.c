// fichero 17773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17773;

Registro17773 crear_registro17773(int id) {
    Registro17773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17773(Registro17773 r) {
    return r.valor + r.id;
}
