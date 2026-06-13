// fichero 38013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38013;

Registro38013 crear_registro38013(int id) {
    Registro38013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38013(Registro38013 r) {
    return r.valor + r.id;
}
