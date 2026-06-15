// fichero 33241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33241;

Registro33241 crear_registro33241(int id) {
    Registro33241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
