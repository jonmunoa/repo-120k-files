// fichero 19129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19129;

Registro19129 crear_registro19129(int id) {
    Registro19129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
