// fichero 12061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12061;

Registro12061 crear_registro12061(int id) {
    Registro12061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
