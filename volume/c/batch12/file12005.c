// fichero 12005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12005;

Registro12005 crear_registro12005(int id) {
    Registro12005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
