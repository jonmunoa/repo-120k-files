// fichero 12221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12221;

Registro12221 crear_registro12221(int id) {
    Registro12221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
