// fichero 15897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15897;

Registro15897 crear_registro15897(int id) {
    Registro15897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
