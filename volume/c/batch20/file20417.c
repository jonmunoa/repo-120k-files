// fichero 20417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20417;

Registro20417 crear_registro20417(int id) {
    Registro20417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
