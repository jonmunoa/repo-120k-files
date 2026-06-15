// fichero 46897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46897;

Registro46897 crear_registro46897(int id) {
    Registro46897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
