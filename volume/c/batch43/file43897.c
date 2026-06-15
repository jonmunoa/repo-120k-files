// fichero 43897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43897;

Registro43897 crear_registro43897(int id) {
    Registro43897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
