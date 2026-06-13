// fichero 21609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21609;

Registro21609 crear_registro21609(int id) {
    Registro21609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21609(Registro21609 r) {
    return r.valor + r.id;
}
