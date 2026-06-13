// fichero 6773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6773;

Registro6773 crear_registro6773(int id) {
    Registro6773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6773(Registro6773 r) {
    return r.valor + r.id;
}
