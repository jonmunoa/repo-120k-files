// fichero 31465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31465;

Registro31465 crear_registro31465(int id) {
    Registro31465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
