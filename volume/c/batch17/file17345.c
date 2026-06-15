// fichero 17345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17345;

Registro17345 crear_registro17345(int id) {
    Registro17345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
