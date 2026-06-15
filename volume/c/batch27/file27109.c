// fichero 27109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27109;

Registro27109 crear_registro27109(int id) {
    Registro27109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
