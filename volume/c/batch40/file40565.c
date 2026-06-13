// fichero 40565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40565;

Registro40565 crear_registro40565(int id) {
    Registro40565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40565(Registro40565 r) {
    return r.valor + r.id;
}
