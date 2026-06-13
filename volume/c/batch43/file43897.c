// fichero 43897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43897;

Registro43897 crear_registro43897(int id) {
    Registro43897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43897(Registro43897 r) {
    return r.valor + r.id;
}
