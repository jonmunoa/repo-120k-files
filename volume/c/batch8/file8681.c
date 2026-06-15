// fichero 8681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8681;

Registro8681 crear_registro8681(int id) {
    Registro8681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
