// fichero 31029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31029;

Registro31029 crear_registro31029(int id) {
    Registro31029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
