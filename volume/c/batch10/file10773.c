// fichero 10773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10773;

Registro10773 crear_registro10773(int id) {
    Registro10773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10773(Registro10773 r) {
    return r.valor + r.id;
}
