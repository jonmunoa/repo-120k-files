// fichero 40257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40257;

Registro40257 crear_registro40257(int id) {
    Registro40257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40257(Registro40257 r) {
    return r.valor + r.id;
}
