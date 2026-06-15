// fichero 7577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7577;

Registro7577 crear_registro7577(int id) {
    Registro7577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
