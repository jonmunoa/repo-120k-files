// fichero 27681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27681;

Registro27681 crear_registro27681(int id) {
    Registro27681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
