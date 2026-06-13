// fichero 29981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29981;

Registro29981 crear_registro29981(int id) {
    Registro29981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29981(Registro29981 r) {
    return r.valor + r.id;
}
