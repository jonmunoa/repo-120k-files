// fichero 6697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6697;

Registro6697 crear_registro6697(int id) {
    Registro6697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6697(Registro6697 r) {
    return r.valor + r.id;
}
