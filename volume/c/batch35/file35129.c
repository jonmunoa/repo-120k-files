// fichero 35129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35129;

Registro35129 crear_registro35129(int id) {
    Registro35129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
