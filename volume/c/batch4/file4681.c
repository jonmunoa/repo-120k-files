// fichero 4681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4681;

Registro4681 crear_registro4681(int id) {
    Registro4681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
