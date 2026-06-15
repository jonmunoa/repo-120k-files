// fichero 21949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21949;

Registro21949 crear_registro21949(int id) {
    Registro21949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
