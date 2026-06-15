// fichero 27673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27673;

Registro27673 crear_registro27673(int id) {
    Registro27673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
