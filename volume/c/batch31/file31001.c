// fichero 31001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31001;

Registro31001 crear_registro31001(int id) {
    Registro31001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
