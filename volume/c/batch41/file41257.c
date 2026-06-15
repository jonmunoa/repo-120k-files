// fichero 41257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41257;

Registro41257 crear_registro41257(int id) {
    Registro41257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
