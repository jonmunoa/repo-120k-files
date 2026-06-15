// fichero 8061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8061;

Registro8061 crear_registro8061(int id) {
    Registro8061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
