// fichero 20897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20897;

Registro20897 crear_registro20897(int id) {
    Registro20897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
