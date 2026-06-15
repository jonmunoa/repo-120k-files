// fichero 14169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14169;

Registro14169 crear_registro14169(int id) {
    Registro14169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
