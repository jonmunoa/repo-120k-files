// fichero 19157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19157;

Registro19157 crear_registro19157(int id) {
    Registro19157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
