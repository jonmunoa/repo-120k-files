// fichero 19949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19949;

Registro19949 crear_registro19949(int id) {
    Registro19949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
