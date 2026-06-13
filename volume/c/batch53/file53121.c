// fichero 53121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53121;

Registro53121 crear_registro53121(int id) {
    Registro53121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53121(Registro53121 r) {
    return r.valor + r.id;
}
