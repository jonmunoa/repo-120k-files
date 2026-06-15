// fichero 17321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17321;

Registro17321 crear_registro17321(int id) {
    Registro17321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
