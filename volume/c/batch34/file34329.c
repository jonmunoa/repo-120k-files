// fichero 34329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34329;

Registro34329 crear_registro34329(int id) {
    Registro34329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34329(Registro34329 r) {
    return r.valor + r.id;
}
