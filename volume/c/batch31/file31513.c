// fichero 31513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31513;

Registro31513 crear_registro31513(int id) {
    Registro31513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
