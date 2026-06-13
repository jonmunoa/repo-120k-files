// fichero 40853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40853;

Registro40853 crear_registro40853(int id) {
    Registro40853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40853(Registro40853 r) {
    return r.valor + r.id;
}
