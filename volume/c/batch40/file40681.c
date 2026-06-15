// fichero 40681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40681;

Registro40681 crear_registro40681(int id) {
    Registro40681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
