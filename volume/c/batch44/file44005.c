// fichero 44005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44005;

Registro44005 crear_registro44005(int id) {
    Registro44005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
