// fichero 35005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35005;

Registro35005 crear_registro35005(int id) {
    Registro35005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
