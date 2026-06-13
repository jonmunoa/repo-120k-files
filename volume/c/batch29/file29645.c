// fichero 29645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29645;

Registro29645 crear_registro29645(int id) {
    Registro29645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29645(Registro29645 r) {
    return r.valor + r.id;
}
