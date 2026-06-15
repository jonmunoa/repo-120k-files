// fichero 19501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19501;

Registro19501 crear_registro19501(int id) {
    Registro19501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
