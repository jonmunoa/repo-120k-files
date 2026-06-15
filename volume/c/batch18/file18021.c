// fichero 18021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18021;

Registro18021 crear_registro18021(int id) {
    Registro18021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
