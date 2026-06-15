// fichero 129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro129;

Registro129 crear_registro129(int id) {
    Registro129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
