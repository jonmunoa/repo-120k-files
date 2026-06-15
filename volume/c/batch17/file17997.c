// fichero 17997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17997;

Registro17997 crear_registro17997(int id) {
    Registro17997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
