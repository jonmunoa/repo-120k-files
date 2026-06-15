// fichero 14993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14993;

Registro14993 crear_registro14993(int id) {
    Registro14993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
