// fichero 27729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27729;

Registro27729 crear_registro27729(int id) {
    Registro27729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
