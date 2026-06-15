// fichero 24681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24681;

Registro24681 crear_registro24681(int id) {
    Registro24681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
