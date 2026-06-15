// fichero 17993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17993;

Registro17993 crear_registro17993(int id) {
    Registro17993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
