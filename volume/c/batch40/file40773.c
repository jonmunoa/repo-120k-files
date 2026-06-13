// fichero 40773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40773;

Registro40773 crear_registro40773(int id) {
    Registro40773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40773(Registro40773 r) {
    return r.valor + r.id;
}
