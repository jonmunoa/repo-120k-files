// fichero 44129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44129;

Registro44129 crear_registro44129(int id) {
    Registro44129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
