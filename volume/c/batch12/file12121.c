// fichero 12121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12121;

Registro12121 crear_registro12121(int id) {
    Registro12121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
