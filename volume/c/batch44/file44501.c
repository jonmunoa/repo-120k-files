// fichero 44501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44501;

Registro44501 crear_registro44501(int id) {
    Registro44501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
