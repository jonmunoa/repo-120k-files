// fichero 14949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14949;

Registro14949 crear_registro14949(int id) {
    Registro14949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
