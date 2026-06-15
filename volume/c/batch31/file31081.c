// fichero 31081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31081;

Registro31081 crear_registro31081(int id) {
    Registro31081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
