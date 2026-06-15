// fichero 20681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20681;

Registro20681 crear_registro20681(int id) {
    Registro20681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
