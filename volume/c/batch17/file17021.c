// fichero 17021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17021;

Registro17021 crear_registro17021(int id) {
    Registro17021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
