// fichero 17333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17333;

Registro17333 crear_registro17333(int id) {
    Registro17333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
