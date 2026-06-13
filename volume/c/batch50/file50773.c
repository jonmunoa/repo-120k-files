// fichero 50773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50773;

Registro50773 crear_registro50773(int id) {
    Registro50773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50773(Registro50773 r) {
    return r.valor + r.id;
}
