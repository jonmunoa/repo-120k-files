// fichero 32897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32897;

Registro32897 crear_registro32897(int id) {
    Registro32897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
