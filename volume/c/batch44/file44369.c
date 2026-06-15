// fichero 44369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44369;

Registro44369 crear_registro44369(int id) {
    Registro44369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
