// fichero 12153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12153;

Registro12153 crear_registro12153(int id) {
    Registro12153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
