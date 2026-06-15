// fichero 20949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20949;

Registro20949 crear_registro20949(int id) {
    Registro20949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
