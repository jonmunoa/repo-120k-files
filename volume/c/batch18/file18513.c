// fichero 18513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18513;

Registro18513 crear_registro18513(int id) {
    Registro18513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
