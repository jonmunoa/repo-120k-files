// fichero 35681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35681;

Registro35681 crear_registro35681(int id) {
    Registro35681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
