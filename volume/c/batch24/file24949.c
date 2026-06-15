// fichero 24949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24949;

Registro24949 crear_registro24949(int id) {
    Registro24949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
