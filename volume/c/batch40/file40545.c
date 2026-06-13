// fichero 40545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40545;

Registro40545 crear_registro40545(int id) {
    Registro40545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40545(Registro40545 r) {
    return r.valor + r.id;
}
