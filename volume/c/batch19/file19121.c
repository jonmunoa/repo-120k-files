// fichero 19121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19121;

Registro19121 crear_registro19121(int id) {
    Registro19121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
