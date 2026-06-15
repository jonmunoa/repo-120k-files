// fichero 45545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45545;

Registro45545 crear_registro45545(int id) {
    Registro45545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
