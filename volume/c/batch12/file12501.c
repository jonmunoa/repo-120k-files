// fichero 12501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12501;

Registro12501 crear_registro12501(int id) {
    Registro12501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
