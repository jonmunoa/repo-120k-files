// fichero 7049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7049;

Registro7049 crear_registro7049(int id) {
    Registro7049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
