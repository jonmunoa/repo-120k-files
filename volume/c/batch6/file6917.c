// fichero 6917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6917;

Registro6917 crear_registro6917(int id) {
    Registro6917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6917(Registro6917 r) {
    return r.valor + r.id;
}
