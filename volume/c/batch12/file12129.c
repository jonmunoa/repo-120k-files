// fichero 12129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12129;

Registro12129 crear_registro12129(int id) {
    Registro12129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
