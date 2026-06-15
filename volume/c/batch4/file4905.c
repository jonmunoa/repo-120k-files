// fichero 4905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4905;

Registro4905 crear_registro4905(int id) {
    Registro4905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
