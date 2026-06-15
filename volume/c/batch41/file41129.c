// fichero 41129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41129;

Registro41129 crear_registro41129(int id) {
    Registro41129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
