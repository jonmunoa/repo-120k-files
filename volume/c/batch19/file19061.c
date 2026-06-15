// fichero 19061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19061;

Registro19061 crear_registro19061(int id) {
    Registro19061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
