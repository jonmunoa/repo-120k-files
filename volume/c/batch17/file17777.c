// fichero 17777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17777;

Registro17777 crear_registro17777(int id) {
    Registro17777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17777(Registro17777 r) {
    return r.valor + r.id;
}
