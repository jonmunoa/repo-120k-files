// fichero 45949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45949;

Registro45949 crear_registro45949(int id) {
    Registro45949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
